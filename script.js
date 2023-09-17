let input=document.getElementById("input");
let buttons=document.querySelectorAll("button")
let string="";
let ev;
input.addEventListener("keyup", (press)=>{
    if(key.press=="shift")
    {
        ev="true";
    }
})
buttons.forEach((button)=>{
    button.addEventListener('click',(e)=>{
        let value=e.target.innerHTML;
        
        if(value=="=" || ev=="true")
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
