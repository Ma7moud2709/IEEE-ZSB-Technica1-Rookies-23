Num = int(input())
students = []
for i in range(0, Num):
    name = input()
    deg = float(input())
    students.append([name, deg])
sorted_score = sorted(list(set([n[1] for n in students])))
sec_lowest = sorted_score[1]
x = []
for student in students:
    if sec_lowest == student[1]:
        x.append(student[0])
for score in sorted(x):
    print(score)
