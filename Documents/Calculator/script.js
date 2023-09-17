let input=document.getElementById("input");
let buttons=document.querySelectorAll("button")
let string="";
let aarav=document.querySelector("body");
aarav.addEventListener("keypress", (press)=>{
    console.log(press.key);
    if(press.key=="Enter")
    {
        console.log("here too");
        document.getElementById("equal").click();
    }
})
buttons.forEach((button)=>{
    button.addEventListener('click',(e)=>{
        let value=e.target.innerHTML;
        
        if(value=="=")
        {
            input.value=Function("return "+ string)();
            string=input.value;
        }
        else if(value=="AC")
        {
            input.value="";
            string="";
        }
        else if(value=="DEL")
        {
            input.value=input.value.slice(0,-1);
            string=input.value;
        }
        else
        {
            string=string+value;
            document.querySelector("input").value=string;
        }
        
    })
})
