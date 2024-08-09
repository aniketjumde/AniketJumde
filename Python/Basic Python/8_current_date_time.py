#Write a program current date or Time and new date

import datetime
current_date=datetime.datetime.now()
print(current_date)
print(current_date.day)
print(current_date.month)
print(current_date.year)

new_date=current_date + datetime.timedelta(days=10)

print(new_date)

previs_date=current_date - datetime.timedelta(days=10)

print(previs_date)


