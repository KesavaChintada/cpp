#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node node;
node* head=NULL;
node* tail=NULL;
node* temp=NULL;

crnode(node* tail){
	cin<<tail->data;
	temp=new node;
	tail->next=temp;
	tail=temp;

}
int main(){
	head=new node;
	tail=head;

	crnode(tail);


}