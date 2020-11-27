#include <bits/stdc++.h>
using namespace std;
/**
  * Hoán đổi 2 hàng trong matrix
*/
int main()
{
  int n,m;
  cin >> n;
  vector<vector<int>> a(n,vector<int>(n));
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cin >> a[i][j];
    }
  }
  int h,c;
  cout<<"Nhap h,c: ";
  cin >> h >> c;
  for(int i=0;i<n;++i){
      swap(a[h][i],a[c][i]);
  }

  cout<<"\n\n\t = Matrix =\n";
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      cout<<a[i][j] <<' ';
    }
    cout<<'\n';
  }
  return 0;
}
