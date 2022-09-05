#include<iostream>
#include<time.h>
using namespace std;

// 📌 Print Array Function:
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// 📌 Swap Function:
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// 📌 Bubble Sort Function:
void BubbleSort(int *a,int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if(flag==0) break; //If the array is already sorted:
    }
}

int main(){
    clock_t start,end;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    // 📌 Manual Input:
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // 📌 Random Input:
    // for(int i=0;i<n;i++){
    //     a[i]=rand()%100;
    // }
    cout<<"Before Sorting :"<<endl;
    printArr(a,n);
    start=clock();
    // Delay:
    for(int i=0;i<10000;i++)
        for(int j=0;j<10000;j++);
    BubbleSort(a,n);
    end=clock();
    cout<<"After Sorting :"<<endl;
    printArr(a,n);

    // Execution time:
    double time_taken=double(end-start)/double(CLOCKS_PER_SEC);
    cout<<"Execution Time : "<<time_taken<<endl;
}