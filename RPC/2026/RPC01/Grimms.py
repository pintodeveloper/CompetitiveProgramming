s = input().rstrip("\n")


s = s.replace("’", "'").replace("‘", "'")

titles = [
    "Animal Appendages",
    "Bewitched Broomstick",
    "Cinderella's Chore",
    "Delicious Disaster",
    "Evening Entertainment",
    "Forgotten Fragments",
    "Grimms' Fairy Tales",
    "Hansel and Gretel",
    "Ignoble Imp",
    "Jaded Journey",
    "Knavish Knockout",
    "Lucky Hans",
    "Mother Hulda",
]


pos = {}
for i, t in enumerate(titles, start=1):
    pos[t] = i

p = pos[s]                      
page = 2 * (p - 1) + 1         
print(page)