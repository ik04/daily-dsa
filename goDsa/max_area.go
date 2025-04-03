package main

import (
	"math"
)

func maxArea(height []int) int{
    l := 0
    r := len(height) - 1
    maxArea := 0
    for l < r {
        h := math.Min(float64(height[l]), float64(height[r]))
        w := r - l
        area := int(h) * w
        maxArea = max(maxArea, area)
        if(height[l] < height[r]){
            l++
        } else {
            r--
        }           
    }
    return maxArea
}
