
#include<iostream>
#include<vector>
using namespace std;
int main(){

     vector<int>prices = {7,1,5,3,6,4};

  int minPrice= prices[0];
  int maxProfit=0;

  for(int i=1; i<prices.size(); i++){
     //sabse sasti price ab tak
     if(prices[i]<minPrice){
      minPrice = prices[i];
     }

      //aaj bechne pe kitna munafa hota 
      int profit = prices[i]-minPrice;

      //agar ye munafa ab tak ke sabse zyada se zyada hai to update karo
        if(profit > maxProfit){
          maxProfit = profit;
        }
    
  }
     cout << "maximun Profit: "<< maxProfit<<endl;
      return 0;
}




