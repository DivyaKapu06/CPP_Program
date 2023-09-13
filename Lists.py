
items = [1,2,3,4,5,5]
items_extend = ["kevin", "joe", "carol"]

items.append(6)
print(items)
items_copy = items.copy()
print(items_copy)
print(items.count(5))
items.extend(items_extend)
print(items)
items.insert(11,"chris")
print(items)