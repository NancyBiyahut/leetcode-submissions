class Solution {
public:
  static  bool comp (const vector<int>&v1 , const  vector<int>&v2)
    {
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>&arr, int x) {
      sort(arr.begin(),arr.end(),comp);
       int unit = 0 ;
        for (int i = 0 ; i < arr.size() ; i++)
        {
          if(arr[i][0] >= x)
          {
              unit += arr[i][1] * x;
              x = 0;
          }
            else
            {
                unit += arr[i][0] * arr[i][1];
                x -= arr[i][0];
            }
        }
        return unit ;
    }
};

/*
static bool check(const vector<int> &v1,const vector<int> &v2){
    return v1[1]>v2[1];
}

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(boxTypes.begin(),boxTypes.end(),check);
    int count = 0;
   
    for(int i=0;i<boxTypes.size();i++){
        
        if(boxTypes[i][0]>=truckSize){
            count+= truckSize*boxTypes[i][1];
             truckSize = 0;
        }
        else{
          truckSize -= boxTypes[i][0];
            count += boxTypes[i][0]*boxTypes[i][1];
        }
		
    }
    
    return count;
}*/