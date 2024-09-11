
//
// Created by riamu on 2/15/2024.
//
#include <vector>
//#include <algorithm>
#include "stuff.h"
// Partition function
//quickSort1 Functions ------------------------------------------------------------------------------------------------------
inline int partition(std::vector<Stuff>& s, int low, int high) {
    Stuff pivot = s[high];
    int i = low -1;
    for(int j = low; j < high; j++){

        if (!(s[j] < pivot)){
            i = i + 1; //i++;
            std::swap(s[i], s[j]);
        }
    }
    std::swap(s[i+1], s[high]);
    return i+1;
}
inline void quickSort(std::vector<Stuff> &s, int low, int high){
    if (low < high) {
        int lessThanPivot = partition(s,low,high);
        quickSort(s,low,lessThanPivot-1);
        quickSort(s,lessThanPivot + 1, high);
    }
}

inline void quickSort(vector<Stuff>& s){
    int low = 0;
    int high = s.size()-1;
    quickSort(s,low,high);
}
//quickSort2 Functions --------------------------------------------------------------------------------------------


inline int partition2(std::vector<Stuff>& s, int low, int high) {
    if (high - low + 1 >= 3) {
        // Find the median of s[high], s[high-1], and s[high-2]
        if ((s[high - 2] < s[high - 1]) ^ (s[high] < s[high - 1]))
            std::swap(s[high], s[high - 1]);
        else if ((s[high - 1] < s[high - 2]) ^ (s[high] < s[high - 2]))
            std::swap(s[high], s[high - 2]);
    } else if (high - low + 1 == 2) {
        if (s[high] < s[high - 1])
            std::swap(s[high], s[high - 1]);
    }

    Stuff pivot = s[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (!(s[j] < pivot)) {
            i++;
            std::swap(s[i], s[j]);
        }
    }
    std::swap(s[i + 1], s[high]);
    return i + 1;
}

inline void quickSort2(std::vector<Stuff> &s, int low, int high){
    if (low < high) {
        int lessThanPivot = partition2(s,low,high);
        quickSort2(s,low,lessThanPivot-1);
        quickSort2(s,lessThanPivot + 1, high);
    }
}

inline void quickSort2(vector<Stuff>& s){
    int low = 0;
    int high = s.size()-1;
    quickSort2(s,low,high);
}
//quickSort3---------------------------------------------------------------------------------------------------


inline void insertionSort(vector<Stuff>& s, int low, int high) {
    for (int j = low + 1; j <= high; j++) {
        Stuff key = s[j];
        int i = j - 1;

        while (i >= low && s[i] < key) {
            s[i + 1] = s[i];
            i = i - 1;
        }
        s[i + 1] = key;
    }
}

inline void quickSort3(std::vector<Stuff> &s, int low, int high, int k){
        if (high - low  + 1 < k) {
            insertionSort(s, low, high);

        } else if (low < high) {
            int lessThanPivot = partition(s, low, high);
            quickSort3(s, low, lessThanPivot - 1,k);
            quickSort3(s, lessThanPivot + 1, high,k);
        }
    }


inline void quickSort3(vector<Stuff>& s, int k ){
    int low = 0;
    int high = s.size()-1;
    quickSort3(s,low,high,k);
}

//quickSort4---------------------------------------------------------------------------------------------------

inline void quickSort4(vector<Stuff>& s, float p) {
    if (p < 0) {
        p = 0;
    } else if (p > 1) {
        p = 1;
    }

    //  threshold for switching to insertion sort based on p
    int k = int(p * s.size());

    // Call quickSort3
    quickSort3(s, k);
}

