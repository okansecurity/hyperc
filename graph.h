#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Properties{
	char* key;
	char* value;
	struct Properties* next;
	}Properties;

typedef struct Label{
	char* LabelName;
	int LabelId;
	}Label;
	
typedef struct node{
	int id;
	char* NodeName;
	Label* node_label;
	Properties* node_properties;
	}node;

typedef struct Edges{
	Label* edges_label;
	node* source_node;
	node* destination_node;
	Properties* edges_properties;
	}Edges;

node* create_node(const char* label_name, const char* node_name) {
    node* x = malloc(sizeof(node));
    if (!x) return NULL;

    x->id = rand();

	// label oluşturuyor burada / İleride eğer node varsa sadece o nodeyi ekle bölümü eklenecek
    x->node_label = malloc(sizeof(Label));
    if (!x->node_label) {
        free(x);
        return NULL;
    }

    x->node_label->LabelId = rand();
    x->node_label->LabelName = malloc(strlen(label_name) + 1);
    strcpy(x->node_label->LabelName, label_name);

    x->NodeName = malloc(strlen(node_name) + 1);
    strcpy(x->NodeName, node_name);
	
	// properties'leri boşa atıyorum çünkü add_properties fonksiyonu yazılacak
    x->node_properties = NULL;
    
    return x;
}

void add_properties(node* node_in_func, const char* key, const char* value) {
    if (!node_in_func) return;

    Properties* new_prop = malloc(sizeof(Properties));
    if (!new_prop) return;

    new_prop->key = malloc(strlen(key) + 1);
    new_prop->value = malloc(strlen(value) + 1);

    strcpy(new_prop->key, key);
    strcpy(new_prop->value, value);
    new_prop->next = NULL;

    if (!node_in_func->node_properties) {
        node_in_func->node_properties = new_prop;
    } else {
        Properties* tmp = node_in_func->node_properties;
        while (tmp->next) tmp = tmp->next;
        tmp->next = new_prop;
    }
}
