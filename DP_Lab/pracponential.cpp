
/***********************************||
/***********************************||
/**\ BISMILLAHIR RAHMANIR RAHEEM    ||
/**\      SHARIFUL ISLAM            ||
/**\       Dept of ICE              ||
/**\          NSTU                  ||
/**\                                ||
/***********************************||
/************************************/

#include<bits/stdc++.h>
#define ll long long int
#include <stdlib.h>
#include <vector>
#define pi acos(-1)
#define MOD 1000000007

#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    count_one(a) __builtin_popcount(a)// Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define    parity(i)    __builtin_parity(i) //even parity 0 and odd parity 1
#define    blz(a)       __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define    btz(a)       __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
///..............binary..................................................................
///next_permutation(ar.begin(),ar.end());finding imidiate next big num(string)..ar are string
///ar="011"//next_permutation will be "101";
///next_permutation(vec.begin(),vec.end()); // Find next lexicographical permutation
///..............string......................................................
///     bitset<9>c(12);...cout<<c<<endl;///c=000001100 or 12 er binary value;
///convert string to intiger:int x=stoi(stringer variable name);compiler gnu 11
///convert string to intiger:int x=atoi(stringer variable name)//taakes character array;
///convert intiger to string:string x=to_string(intiger variable name);
///number of zero int x=cout(vec.begin(),vec.end(),0);///or uses bitset
///number of one int x=cout(vec.begin(),vec.end(),1);a
/// cout<<fixed<<setprecision(1);
///sin and cos expect input in radians not degrees. so use , sin(degrees * pi / 180)
/// map<char,int,greater<char>>mp;........descending order,,,,acording to keyvalue ...


using namespace std;
 int main()
 {
     ll base,power,ans=1;
     cin>>base>>power;
     while(power>0)
     {
         if(power%2==1)
         {
             ans=ans*base;
         }
         base=base*base;
         power=power/2;
     }
     cout<<ans<<endl;
 }

