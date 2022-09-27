#include<iostream>
using namespace std;
int queue[20],n,front=0,rear=0;
void insert(int val)
{
    if(rear== n)
    cout<<"Queue Overflow"<<endl;
    else
    {
        rear++;
        queue [rear]= val;
    }
}
void delete()
{
    //if queue is empty
    if (front== rear)
    {
        cout<<"\n Queue is empty\n";
        return;
    }
    // shift all the elements from index 2 till rear//to the left by one
    else{
        for(int i= 0; i<rear-1; i++)
        {
            queue [i]= queue[i+1];
        }
        // decrement rear
        rear--;
    }
    return;
}
void Display()
{
    int i;
    if (front == rear)
    {
        cout<<"\n Queue is Empty\n";
        return;
    }
    // traverse front to rear & print element
    for(i= front; i<rear; i++)
    {
        cout<<"\n"<<queue[i+1];
    }
    return;
}
int main(void)
{
    // create a queue of capacity 4
    cout<<"\n Enter size of queue";
    cin>> n;
    /* cout<<"/n enter elements of queue:";
    for(int i=0; i<n; i++)
    cin>> queue[i];*/
    // print Queue elements
    Display();
    // inserting elements in the queue
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    cout<<"\n After insertion, queue=\n";
    //print Queue elements
    Display();
    //insert element in the queue
    Insert(60);
    // print Queue elements
    Display ();
    Delete();
    Delete();
    cout<<"\n After deletion of 2 nodes,queue=\n";
    //print Queue elements
    Display();
    return 0;
    }
