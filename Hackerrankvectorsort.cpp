int main() {
vector<int>v;
int x;
cin>>x;
for(int i=0; i<x; i++){
int saman;
cin>>saman;
v.push_back(saman);
}
sort(v.begin(),v.end()); 
for(int i=0; i<x; i++){
cout<<v[i]<<" ";
}
return 0;
}
