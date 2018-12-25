
#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
    long t;
    cin >> t;
    for(long a0 = 0; a0 < t; a0++){
        long N;
        cin >> N;
        /*
        int ans = 0 ; 
        for (int i= 0 ; i<N ; i++)
        {
            if (i%3 == 0 || i%5 == 0)
            {
                ans = ans + i;
            }
        }
        cout<<ans<<endl;
        
        */
        
         unsigned long long sum=0,p;
        
         p = (N-1)/3;
        sum = ((3*p*(p+1))/2);

        p = (N-1)/5;
        sum = sum + ((5*p*(p+1))/2);

        p = (N-1)/15;
        sum = sum - ((15*p*(p+1))/2);
        cout<<sum<<endl;
        
        
    }
    return 0;
}
