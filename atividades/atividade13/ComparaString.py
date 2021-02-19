

import sys


string_1 = sys.argv[1]
string_2 = sys.argv[2]

print(f"{string_1}: {len(string_1)} ")
print(f"{string_2}: {len(string_2)} ")

if string_1.find(string_2) == 0:
    print(f"{string_1} contém {string_2}")

else:
    print(f"{string_1} não contém {string_2}")


if string_2.find(string_1) == 0:
    print(f"{string_2} contém {string_1}")

else:
    print(f"{string_2} não contém {string_1}")


print(string_1[::-1])
print(string_2[::-1])
