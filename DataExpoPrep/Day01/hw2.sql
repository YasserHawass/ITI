SELECT company_name, Count(orders.customer_id)
  FROM customers LEFT JOIN orders
    ON customers.customer_id = orders.customer_id
 GROUP BY company_name;
