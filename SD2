#include<iostream>
using namespace std;
class treenode
{
friend class tbt;
int data;
treenode *lptr,*rptr;
int lbit,rbit;
public:

}*dummy;
class tbt
{
treenode *root;
public:
    treenode *create()
{
    treenode *a=new treenode;
    a->lptr=a->rptr=NULL;
    a->lbit=a->rbit=1;
    cout<<"\n Enter the data";
    cin>>a->data;
    return a;

}

    tbt()
    {
        root=NULL;
    }
    void accept()
    {
        treenode *a=new treenode;
        a=create();
        if(root==NULL)
        {
            /*dummy->data=-9999;
            dummy->lbit=0;
            dummy->rbit=0;
            dummy->lptr=a;
            dummy->rptr=dummy;
            */
            root=a;
        }
        else
        {
            treenode *p=root;

            while(1)
            {
                if((a->data)<(p->data))
                   {
                     if(p->lbit==1)
                        break;
                    else
                        p=p->lptr;
                   }
                   else
                   {
                       if(p->rbit==1)
                        break;
                    else
                        p=p->rptr;
                   }
            }
            if((a->data)<(p->data))
               {                    cout<<"\n Added to the left of"<<(p->data);
                   a->lptr=p->lptr;
                   a->rptr=p;
                   p->lptr=a;
                   p->lbit=0;
               }
               else
                {
                        cout<<"\n Added to the  right of"<<(p->data);
a->rptr=p->rptr;
a->lptr=p;
p->rbit=0;
p->rptr=a;

                }
        }


    }

treenode* leftmost(treenode *a)
{
while(a->lbit==0)
{
a=a->lptr;
}
return a;


}
void  traversal()
{
    cout<<"\n Inorder Traversal : \n";
treenode *a=root;
a=leftmost(root);
while(a!=NULL)
{
cout<<" "<<a->data;
if(a->rbit==1)
{

a=(a->rptr);
}
else
{
a=leftmost(a->rptr);
}

}

}

};
int main()
{
    tbt s;
    int c;
    do
    {


    cout<<"\n 1.Add tree nodes \n 2.In-order Traversal \n 3.Exit";
    cout<<"\n Enter the choice";
    cin>>c;
    switch(c)
    {
        case 1:s.accept();break;
        case 2:s.traversal();break;
        case 3:break;
    }
    }while(c!=3);
}
