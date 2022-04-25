
const products = [
    { name: 'Phone', price: 999 },
    { name: 'Computer', price: 1999 },
    { name: 'Tablet', price: 995 },
  ];
  
  const index = products.findIndex(product => product.price > 1000);
  
  console.log(index); // 1
  