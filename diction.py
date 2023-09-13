
travel_info = {
     0 : "Vist Italy",
     1 : "Visit France"
 }
tuple_travel = [(0,"USA"),(1,"Canada")]
list_travel = ["a","b"]

list_travel.append("b")
print(list_travel)
print(travel_info.get(1))
print(travel_info.items())
print(travel_info.keys())
print(travel_info)
travel_info.update(tuple_travel)
travel_info.update(x=2,y=3)
#travel_info.clear()
print(travel_info)
print(travel_info.fromkeys(list_travel[0],"z"))
print(list_travel[1])


for index in travel_info.keys():
    print(index)
    #print(travel_info.get(index))
    