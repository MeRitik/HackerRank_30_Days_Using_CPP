

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> arr = {};
        return arr;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> arr = {1, 2};
        return arr;
    }

    static int get_expected_result() {
        // complete this function
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> arr = {1, 1};
        return arr;
    }

    static int get_expected_result() {
        // complete this function
        return 0;
    }
};