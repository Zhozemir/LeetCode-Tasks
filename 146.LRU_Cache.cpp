#include <iostream>
#include <list>
#include <unordered_map>

class LRUCache {

private:

	int capacity;
	std::list<std::pair<int, int>> data;
	std::unordered_map<int, std::list<std::pair<int, int>>::iterator> dataMap;

public:

	LRUCache(int size) : capacity(size) {}

	int get(int key) {
		
		if (dataMap.find(key) == dataMap.end())
			return -1;

		auto it = dataMap[key];
		data.splice(data.begin(), data, it);
		return it->second;
	
	}

	void put(int key, int value) {
	
		if (dataMap.find(key) != dataMap.end()) {
		
			auto it = dataMap[key];
			data.erase(it);
		
		}

		data.push_front({ key, value });
		dataMap[key] = data.begin();

		if (data.size() > capacity) {
		
			dataMap.erase(data.back().first);
			data.pop_back();
		
		}
	
	}

};