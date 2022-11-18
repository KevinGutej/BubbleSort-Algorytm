#include <iostream>
using namespace std;

void bubbleSort(int array[], int n)
{
    int i, j;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++) {
            if (array[j - 1] > array[j])
            {
                int temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
        
    }
    
}

void insertionSort(int array[], int n)
{
	int i,j,helper;
	for(int i=1; i< n; i++){
		for(int j=1; j < n; j--){
			if(array[j]>=array[j-1])
	         {
	             break;
	         }
         
		}
		swap(array[j],array[j-1]);
	}
}

void printArray(int array[], int n)
{
	int i;
    for(i= 0; i < n; i++ )
	cout <<  array[i] << " ";
	cout<<endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int array[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    printArray(array,n);
    cout << "Sorting Array Using Bubble method..." << endl;
    bubbleSort(array,n);
    printArray(array,n);
    cout << "Sorting Array Using Insertion Sort ..." << endl;
    insertionSort(arrar,n);
    printArray(array,n); 
    
    
    return 0;
}
