const addon = require('bindings')('example.node');

console.log('This should be eight:', addon.add(3, 5));