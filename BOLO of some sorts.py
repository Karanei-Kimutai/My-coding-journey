#this program works like a search box,but can be used for flagging entrances into a building as used below.
names_list=['Kyler','Jason','Angella','Karanei','Felicia','Barrack']
#other names can be added to the list
name =input("Enter name here:")
if name in names_list:
    print("Access Denied")
else:
    print("Access granted")