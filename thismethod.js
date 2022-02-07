let counter = {
    count: 0,
    next: function () {
      return ++this.count;
    },
  };
  
  counter.next();