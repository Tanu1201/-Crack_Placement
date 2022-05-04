#include <iostream>
using namespace std;

void duplicate(int *arr, int num)
{
  for (int i = 0; i < num; i++)
  {
    for (int j = i + 1; j < num; j++)
    {
      if (arr[i] == arr[j])
      {
        cout << arr[i];
        break;
      }
    }
    break;
  }
  return;
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

  duplicate(a, n);
}