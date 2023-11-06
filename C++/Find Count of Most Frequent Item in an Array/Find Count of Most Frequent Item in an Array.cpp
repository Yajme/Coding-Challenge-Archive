
unsigned int most_frequent_item_count(const std::vector<int>& collection) {
    int count = 0;
    if (collection.size() == 0) return 0;
    std::vector<int> v = collection;
    sort(v.begin(), v.end());
    std::vector<int>::iterator it;
    std::vector<int> counts;
   it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));

    for (int j = 0; j < v.size(); j++) {
        count = 0;
        for (int i = 0; i < collection.size(); i++) {
            if (v.at(j) == collection.at(i)) {
                count++;
            }
        }
        counts.push_back(count);
    }
    return *max_element(counts.begin(), counts.end());;
}
