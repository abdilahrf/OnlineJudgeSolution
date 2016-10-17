/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

var sec = 0;
var m_names = new Array("January", "February", "March", 
"April", "May", "June", "July", "August", "September", 
"October", "November", "December");

function tickTime(obj)
{
    dates = new Date(sec*1000);
    day = dates.getDate();
    year = dates.getYear() + 1900;
    month = dates.getMonth();
    sec++;
    str = ((day<10)?"0":"")+day + " " + m_names[month]  + " " + year + " " + dates.toLocaleTimeString();
    obj.html(str);
}

function startTickTime(ms,obj)
{
    sec = ms;
    tickTime(obj);
    window.setInterval(tickTime, 1000,obj);
}

function goToProfile(formObj,username)
{
    formObj.action += "/site/profile/username/"+username;
}