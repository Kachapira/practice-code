#make sure you commit this code 
#code main use to play arounf with a list
GuestList = ['mikaev', 'nikolai', 'soap', 'gaz']
message1 = f"\n Hey there {GuestList[0].title()} and {GuestList[1].title()}, I wanna invite you to a family dinner lol"
#printin the messages
print(message1)
GuestList.append('nikko')
#print(GuestList)
not_coming = GuestList.pop(0)
#print(message1)
print(f"\n Apparently, {not_coming.title()} is not coming")

GuestList[2] = 'Ghost'
#print(GuestList)

message4 = "As such, Ghost will take his place"
#print(message4)

GuestList.append('Abraham')
GuestList.append('Jacob')
GuestList.append('Isaac')
#print(GuestList)

print(f"\n That means {GuestList[0].title()}, {GuestList[1].title()} and {GuestList[2].title()} are all invited")
print(f"{GuestList[3].title()}, {GuestList[4].title()} and {GuestList[5]} are also invited")