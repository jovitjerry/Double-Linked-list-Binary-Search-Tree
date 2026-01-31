#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *prev;
int data;
struct node *next;};
struct node *head, *newnode,*temp;

//inert beg
int insertbeg(){
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data to be inserted at the beginning: ");
scanf("%d",&newnode->data);
newnode->prev=NULL;
head->prev = newnode;
newnode->next = head;
head = newnode;}

//insert end
int insertend(){
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data to be inserted at the end: ");
scanf("%d",&newnode->data);
newnode->next = NULL;
while(temp->next!=NULL){
temp = temp->next;}
temp->next = newnode;
newnode->prev = temp;}

//insert at pos
int insertpos(){
struct node *counter;
int pos,i=1,count=0;
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter position to be inserted at: ");
scanf("%d",&pos);
counter = head;
while(counter!=NULL){
count++;
counter=counter->next;}
if(count<pos){
printf("Out of range");}
else{
temp = head;
while(i<pos-1){
temp=temp->next;
i++;}
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->prev = temp;
newnode->next=temp->next;
temp->next = newnode;}}

//del front
int delfr(){
temp = head;
head = head->next;
head->prev = NULL;
free(temp);}

//del end
int delend(){
struct node *prevs;
temp = head;
while(temp->next!=NULL){
prevs = temp;
temp = temp->next;}
if(temp==head)
head=NULL;
else{
prevs->next=NULL;}
free(temp);}

//delpos
int delpos(){
struct node*counter,*nextnode;
int i = 1,count = 0,pos;
printf("ENter pos: ");
scanf("%d",&pos);
counter = head;
while(counter!=NULL){
count++;
counter = counter->next;}
if(pos>count)
printf("Out of range:");
else{
temp = head;
while(i<pos-1){
temp=temp->next;
i++;}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);}}

void main(){
int i,n;
head = NULL;
printf("Enter number of nodes: ");
scanf("%d",&n);
for(i=0;i<n;i++){
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->next = NULL;
newnode->prev = NULL;
if(head == NULL){
head = temp = newnode;}
else{
temp->next = newnode;
newnode->prev = temp;
temp = newnode;}}
insertbeg();
insertend();
insertpos();
delfr();
delend();
delpos();
temp=head;
while(temp!=NULL){
printf("%d\t",temp->data);
temp = temp->next;}}

