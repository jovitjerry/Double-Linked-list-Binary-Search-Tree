#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left,*right;};

struct node *create(){ 
int x;
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data:(-1 for no node) ");
printf("\n");
scanf("%d",&x);
if(x == -1){
return NULL;}
newnode->data = x;
printf("Enter left child of %d: ",x);
newnode->left=create();
printf("Enter right child of %d: ",x);
newnode->right=create();
return newnode;}

void pre(struct node *root){
if(root == NULL){
return;}
else{
printf("%d",root->data);
pre(root->left);
pre(root->right);}}

void post(struct node *root){
if(root == NULL){
return;}
else{
post(root->left);
post(root->right);
printf("%d",root->data);}}

void inord(struct node *root){
if(root == NULL){
return;}
else{
inord(root->left);
printf("%d",root->data);
inord(root->right);}}

void main(){
struct node *root;
root = NULL;
root = create();
printf("Pre order is: ");
pre(root);
printf("Post order is: ");
post(root);
printf("In order is: ");
inord(root);}
