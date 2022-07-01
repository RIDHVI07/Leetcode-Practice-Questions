  bool compare(vector<int>v1,vector<int>v2){
            return v1[1]>v2[1];
        }
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
         
        int totalNum=0;
       
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int i =0;
        
   
        while(truckSize>0 && i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){
                totalNum+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                int leftVal = truckSize;
                truckSize-=leftVal;
                totalNum+=leftVal*boxTypes[i][1];
            }
            i++;
            
        }
        return totalNum;
    }
};