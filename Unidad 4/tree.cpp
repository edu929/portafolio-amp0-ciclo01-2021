z#include <iostream>
#include <cstdint>

using namespace std;

struct node{
	int key_value;
	node *left;
	node *right;	
};

class btree{
	public:
		btree();
		~btree();
		void insert(int key);
		node *search(int key);
		void destroy_tree();
		node *get_root();
	private:
		void destroy_tree(node *leaf);
		void insert(int key, node *leaf);
		node *search(int key, node *leaf);
		node *root;
};

btree::btree(){
	root = NULL;
}

btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){
	if(key < leaf->key_value){
		if(leaf->left!=NULL){
			insert(key, leaf->left);
		} else {
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL;		// Define que el nodo hijo a la izq del nuevo sea nulo
			leaf->left->right=NULL;		// Define que el nodo hijo a la der del nuevo sea nulo
		}
	} else if (key >= leaf->key_value) {
		if(leaf->right!=NULL){
			insert(key, leaf->right);
		} else {
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL;		// Define que el nodo hijo a la izq del nuevo sea nulo
			leaf->right->right=NULL;	// Define que el nodo hijo a la der del nuevo sea nulo
		}
	}
}

node *btree::search(int key, node *leaf){
	if(leaf!=NULL){
		if(key==leaf->key_value){
			return leaf;
		} else if(key < leaf->key_value){
			return search(key, leaf->left);			
		} else {
			return search(key, leaf->right);
		}
	} else {
		return NULL;
	}
}

void btree::insert(int key){
	if(root!=NULL){
		insert(key, root);
	} else {
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

node *btree::get_root(){
	return root;
}

int main(){
	btree arbol;
	arbol.insert(10);
	arbol.insert(20);
	arbol.insert(8);
	arbol.insert(3);
	arbol.insert(9);
	arbol.insert(15);
	arbol.insert(25);
	arbol.insert(13);
	arbol.insert(7);
	arbol.insert(5);
	arbol.insert(2);
	arbol.insert(38);
	cout << "\n\t\t          (" << arbol.get_root()->key_value << ") \n" ;
	cout << "\n\t\t       /        \\ \n" ;
	cout << "\n\t\t    /              \\ \n" ;
	cout << "\n\t\t  (" << arbol.get_root()->left->key_value <<")" <<  "              (" << arbol.get_root()->right->key_value << ")\n" ;
	cout << "\n\t\t/     \\" ;
	cout << "\t\t  /     \\\n";
	cout << "\n\t      (" << arbol.get_root()->left->left->key_value <<")" <<  "     (" << arbol.get_root()->left->right->key_value  << ")";
	cout << "\t(" << arbol.get_root()->right->left->key_value << ")" << "    (" << arbol.get_root()->right->right->key_value << ")\n" << endl;
	cout << "	     /   \\ \n";
	cout << "\n	   (" << arbol.get_root()->left->left->left->key_value << ")" << "   (" << arbol.get_root()->left->left->right->key_value << ")\n";
	
	cout << arbol.search(10) << endl;
	cout << arbol.search(10)->key_value << endl;
	cout << arbol.search(20) << endl;
	cout << arbol.search(20)->key_value << endl;
	cout << arbol.search(9) << endl;
	cout << arbol.search(9)->key_value << endl;
	cout << arbol.search(0) << endl;
	cout << arbol.search(0)->key_value << endl;
	
	return 0;
}










