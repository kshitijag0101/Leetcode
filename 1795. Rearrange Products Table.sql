# Write your MySQL query statement below
select product_id, "store1" store, store1 as price from products where store1 is not null
union
select product_id, "store2" store, store2 as price from products where store2 is not null
union
select product_id, "store3" store, store3 as price from products where store3 is not null