// This program use sort function of stl lib in cpp

#include <iostream>
#include <algorithm>

using namespace std;

void show(int *arr, int num)
{

  for (int i = 0; i < num; i++)
  {
    cout << arr[i];
  }
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  show(a, n);
}