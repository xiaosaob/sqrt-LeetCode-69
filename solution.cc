// Implement int sqrt(int x).

// Compute and return the square root of x.

class Solution {
public:
    int sqrt(int x) {
        if(x <= 1) return x;
        int left = 1, right = x/2;
        while(left <= right) {
            int mid = left+(right-left)/2;
            if(x/mid == mid) return mid;
            else if(x/mid > mid) left = mid+1;
            else right = mid-1;
        }
        return left-1;
    }
};


class Solution {
public:
  int sqrt(int x) {
      if (x == 0) return 0;
      double last = 0;
      double res = 1;
      while (res != last)
      {
          last = res;
          res = (res + x / res) / 2;
      }
      return int(res);
  }
};
