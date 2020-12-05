'''
a = 1000 % 107
print(a)
print('%%%%%%')
number = 1000
divider = 107
for i in range(int(number / divider + 2)):
    if number - divider * i == 0:
        print('0')
        break
    elif number - divider * i < 0:
        a = number - divider * (i - 1)
        print(a)
        break


short_man = 158.5
high_man = 188.6

distance_from_short_to_hight = input('distance_from_short_to_hight:')
distance_from_high_to_tree = input('distance_from_high_to_tree:')

tree_height = (int(distance_from_high_to_tree) + int(distance_from_short_to_hight))\
    * high_man / int(distance_from_short_to_hight) + short_man
print('the height of tree is: %.4f'%tree_height)
'''
'''
a=0
b=1
for i in range (20):
    a,b = b,a+b
    print (i,b)
'''

for i in range (3):
    for j in range (3):
        if j == 1:
            break
        print(j)
