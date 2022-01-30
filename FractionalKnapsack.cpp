#include<iostream>
using namespace std;

bool Compare(Item I1, Item I2){

    double Unit1 = (I1.value * 1.0) / (I1.weight);
    double Unit2 = (I2.value * 1.0) / (I2.weight);
    return (Unit1 > Unit2);
}


int main(){
   
double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr, arr+n, Compare);
    double answer =0;
    for(int i=0; i<n; i++){
        if(arr[i].weight >= W)
        {
            double unit = ((arr[i].value)/(arr[i].weight));
            answer += unit *W;
            break;

        }
        answer += arr[i].value;
        W -= arr[i].weight;
    }

    return answer;
  }
}


