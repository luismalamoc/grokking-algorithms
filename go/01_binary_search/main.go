package main

import (
	"fmt"
)

func main() {
	var list = []int{1, 3, 5, 7, 9}
	fmt.Printf("test 1 %v\n", binary_search(list, 3))
	fmt.Printf("test 2 %v\n", binary_search(list, -1))
}

func binary_search(list []int, item int) int {

	low := 0
	high := len(list) - 1

	for low <= high {
		mid := (low + high) / 2
		guess := list[mid]

		if guess == item {
			return mid
		}

		if guess > item {
			high = mid - 1
		} else {
			low = mid + 1
		}

	}
	return -1
}
