# Write your MySQL query statement below
select name,sum(amount) balance
from Transactions t
join Users u
on t.account = u.account
group by name
having balance>10000