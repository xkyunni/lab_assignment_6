int search(int numbers[], int low, int high, int value) {
    if (low > high) {
        // Base case: value not found in array.
        return -1;
    }

    int mid = low + (high - low) / 2; // Calculate middle index.

    if (numbers[mid] == value) {
        // Base case: value found at middle index.
        return mid;
    } else if (numbers[mid] < value) {
        // Recursive case: value is in upper half of array.
        return search(numbers, mid + 1, high, value);
    } else {
        // Recursive case: value is in lower half of array.
        return search(numbers, low, mid - 1, value);
    }
}
