#include <iostream>

using namespace std;

int l_search(int key, int array[], int length);

int main(void)
{
  int n, key, a[50];
  cout << "Plese enter the no. of elements:";
  cin >> n;
  cout << "Plese enter the elements below:\n";
  for(int i=0;i<n;i++)
  {
    cin >> a[i];
  }
  cout << "Please enter the element to search:";
  cin >> key;
  //calling linear search which will return 0 or a positive integer for success.
  int result = l_search(key,a,n);
  if(result >=0)
  {
    cout << "Key " << key << " is present at index " << result << "\n";
    return 0;
  }
  cout << "Key " << key << " is not present in array\n";


}

//linear search implemetation
int l_search(int key, int array[], int length)
{
  for(int i=0;i<length;i++)
  {
    if(key == array[i])
    {
      return i;
    }
  }
  return -1;

}
