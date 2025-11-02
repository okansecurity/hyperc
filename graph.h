// In development

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


typedef struct{
    char* key;
    char* value;
} Properties;

typedef struct{
    int label_id;
    char* label_name;
} Label;
    
typedef struct{
    int Node_id;
    char* Node_name;
    int Node_Label_id;
    Properties* Node_Properties;
    int property_count;
} Node;


void create_database_dir(void) {
	#ifdef _WIN32
		_mkdir("database");
	#else
		mkdir("database", 0777);
	#endif
}

Label* Create_label(int id, const char* new_label_name){
	
	/* Creat label */
    Label* label = malloc(sizeof(Label));
    if(!label){
		return NULL;
	}

    label->label_id = id;
    label->label_name = malloc(strlen(new_label_name) + 1);
    strcpy(label->label_name, new_label_name);
    
    /* add file */
    create_database_dir();

    int file_name_size = strlen("database/") + strlen("labels.cdb") + 1;
	char* file_name = malloc(sizeof(file_name_size));

	snprintf(file_name, file_name_size, "database/labels.cdb");

    FILE* label_file = fopen(file_name,"a");
    if(!label_file){
        return label;
    }
    
    fprintf(label_file, "%d=%s\n", id, new_label_name);
    
    fclose(label_file);
	free(file_name);
	
    return label;
}

Node* Create_node(int id, const char* name, const char* label_id_for_node, int property_count){
	/* create node */
    Node* node = malloc(sizeof(Node));
    if(!node) return NULL;

    node->Node_id = id;

    node->Node_name = malloc(strlen(name) + 1);
    if(!node->Node_name){
        free(node);
        return NULL;
    }
    
    strcpy(node->Node_name, name);

    node->Node_Label_id = label_id_for_node;
    node->property_count = property_count;

    node->Node_Properties = NULL;

	/* add file */
    create_database_dir();

    int file_name_size = strlen("database/") + strlen("nodes.cdb") + 1;
	char* file_name = malloc(file_name_size);

	snprintf(file_name, file_name_size, "database/nodes.cdb");

    FILE* node_file = fopen(file_name,"a");
    if(!node_file){
        return node;
    }
    
    fprintf(node_file, "%d=%s=%d=%d\n", node->Node_id, node->Node_name,node->Node_Label_id,node->property_count);
    
    fclose(node_file);
	free(file_name);
	
    return node;
}

