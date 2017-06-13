#include <iostream>

using namespace std;

int b_search(int key, int array[], int length, int middle);

int main(void)
{
  int n, key, a[50];
  cout << "Plese enter the no. of elements:";
  cin >> n;
  cout << "Plese enter the sorted elements below:\n";
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
  }
  cout << "Please enter the element to search:";
  cin >> key;
  //calling binary search which will return 0 or a positive integer for success.
  int result = b_search(key,a,n,(n-1)/2);
  if(result >=0)
  {
    cout << "Key " << key << " is present at index " << result << "\n";
    return 0;
  }
  cout << "Key " << key << " is not present in array\n";


}

//binary search implemetation
int b_search(int key, int array[], int length, int middle)
{
  int start,end;

  if(array[middle] == key)
  {
    return middle;
  }
  else if (array[middle] > key)
  {
    start = 0;
    end = middle-1;
    middle = (start + end)/2;
    return b_search(key,array,length,middle);

  }
  else if (array[middle] < key)
  {
    start = middle+1;
    end = length-1;
    middle = (start + end)/2;
    return b_search(key,array,length,middle);
  }

  return -1;

}
