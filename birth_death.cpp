// #include<bits/stdc++.h>
// using namespace std;
// class run{
//     int n;
//     vector<int>birth;
//     vector<int>death;
//     public:
//         run(int n){
//             this->n=n;
//         }
//         void getBD(){
//             cout<<"\nEnter the Birth and Death year ";
//             for(int i=0;i<n;i++){
//                 cin>>birth[i]>>death[i];
//             }
//             cout<<n;
//         }
// };
// int main(){
//     int n;
//     cout<<"\nEnter the number of elements ";
//     cin>>n;
//     run r(n);
//     r.getBD();
//     return 0;
// }
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cout<<"\nEnter the number of elements ";
    cin>>n;
    vector<int>b;
    vector<int>d;
    cout<<"\nEnter the birth and death yr\n";
    cout<<n;
    for(int i=0;i<n;i++){
        cin>>b[i];
        cin>>d[i];
    }
    sort(b.begin(),b.end());
    sort(d.begin(),d.end());
    int i=0,j=0,s=0;
    while(i<n && j<n){
        if(b[i]<=d[j])
            i++,s+=1;
        else
            j++,s-=1;
    }
    cout<<s;
    return 0;
}