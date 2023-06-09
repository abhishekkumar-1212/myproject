
//  Now By using javascript 

console.log('This is drag and drop ');

// By taking imgBox by using JavaScript
const imgBox = document.querySelector('.imgBox');  // By using querySelector
const whiteBoxes = document.getElementsByClassName('whiteBox');

// When we drag two draggable elements, we have to use two event listeners
// Also, use arrow functions
// Event Listeners for draggable element imgBox
imgBox.addEventListener('dragstart', (e) => {
    // when we drag the image 
    console.log('DragStart is triggered');

    e.target.className += ' hold';
    // here we set the time by which the image takes some time to hide.
    setTimeout(() => {
        e.target.className = 'hide';
    }, 0);
});

imgBox.addEventListener('dragend', (e) => {
    // Here when we drop the image 
    console.log('Dragend is triggered');
    e.target.className = 'imgBox';   // when we drag the image, the image does not disappear
});


// Now using for...of loop
for (whiteBox of whiteBoxes) {
    whiteBox.addEventListener('dragover', (e) => {
        console.log('Dragover is triggered');
        e.preventDefault();
       
    });

    whiteBox.addEventListener('dragenter', (e) => {
        e.preventDefault();
        console.log('DragEnter is triggered');
    });

    whiteBox.addEventListener('dragleave', () => {
        console.log('DragLeave is triggered');
    });

    whiteBox.addEventListener('drop', (e) => {
        console.log('Drop is triggered');
        e.target.append(imgBox);
    });
}
