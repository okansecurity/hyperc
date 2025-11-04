// İn development
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Property {
    char *key;
    char *value;
    struct Property *next;
} Property;

typedef struct Node {
    int id;
    Property *property;
    struct Node *next;
} Node;

typedef struct Edge {
    int from_id;
    int to_id;
    char *label;
    struct Edge *next;
} Edge;

typedef struct Graph {
    Node *nodes;
    Edge *edges;
} Graph;

Graph* create_graph() {
    Graph *g = (Graph*) malloc(sizeof(Graph));
    g->nodes = NULL;
    g->edges = NULL;
    return g;
}

Node* create_node(int id) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->id = id;
    node->property = NULL;
    node->next = NULL;
    return node;
}

void add_property(Node *node, const char *key, const char *value) {
    Property *property = (Property*) malloc(sizeof(Property));
    property->key = strdup(key);
    property->value = strdup(value);
    property->next = node->property;
    node->property = property;
}

Edge* create_edge(int from_id, int to_id, const char *label) {
    Edge *edge = (Edge*) malloc(sizeof(Edge));
    edge->from_id = from_id;
    edge->to_id = to_id;
    edge->label = strdup(label);
    edge->next = NULL;
    return edge;
}

void add_node(Graph *graph, Node *node) {
    node->next = graph->nodes;
    graph->nodes = node;
}

void add_edge(Graph *graph, Edge *edge) {
    edge->next = graph->edges;
    graph->edges = edge;
}

