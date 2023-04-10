#include <iostream>
#include <algorithm>
using namespace std;
void getBookData();
void selectionSort();
int mode();
double median();
double average();

void getBookData(int arr[], int num){
    int i;
    //Use for loop to create array of students
    for(i=0; i<num; i++){
        cout << "Enter number of books read by each student: "<<endl;
        if (i <= num){
            cout << "Student " << i+1 <<endl;
            cin >> arr[i];
        }
    }
}

void selectionSort(int values[], int size){
    sort(values, values + size);
}
    
double median(int* arr, int num){
    if (num%2==0){
        int med = (arr[(num-1)/2] + arr[num/2]);
        double medi = (med);
        return medi/2;
    }
    else if(num%2!=0){
        return(double)(arr[num/2]);
    }
    return 0;
}


double average(int arr[], int num){
    int p;
    int sum = 0 ;
    for(p=0;p<num;p++){
        sum += arr[p] ;
    }
    return (double)sum/num;
}


int mode(int *arr, int num){
    int mode;
    int possibleMode = 0;
    for(int i =0; i<num; i++){
        if(arr[i] == arr[i+1]){
            possibleMode= arr[i];
        }
        else {
            continue;
        }
    }
    if(possibleMode != 0){
        mode = possibleMode;
        return mode;
    }
    else{
        return -1;
    }
}
    



int main(){
    int num;
    cout << "Enter the number of students surveyed: "<<endl;
    cin >> num;
    int *list= new int[num];
    getBookData(list,num);
    selectionSort(list, num);
    cout << "Number of students surveyed: " << num << endl;
    cout << "The median number of books read is: " << median(list, num) << endl;
    cout << "The average number of books read is: " << average(list, num)<< endl;
    cout << "The mode of the number of books read is : " << mode(list, num)<< endl;
    delete[] list;
    
}

