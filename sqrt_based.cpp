We’re given an integer area. We need to find [L, W] such that:

L * W == area

L >= W

L - W is minimized (closest to a square)



class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area); 
        while (area % w != 0) {
            w--;
        }
        return {area / w, w};
    }
};
