# Write your MySQL query statement below
SELECT m.name FROM Employee e
JOIN Employee m
WHERE e.managerID = m.id
GROUP BY e.managerID
HAVING COUNT(*) >= 5;
