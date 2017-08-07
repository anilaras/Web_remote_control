$(document).ready(function() {
		var keys = {};

		$(document).keydown(function (e) {
		    keys[e.which] = true;
		    flags = ["","Sol ileri","Sadece İleri","Sağ İleri","Sadece Sol","Durdur","Sadece Sağ","Sol Geri","Sadece Geri","Sağ Geri"];
		    if(keys[37] && keys[38])
		    	flag = 1;
		    else if(keys[38] && keys[39])
		    	flag = 3;
		    else if(keys[38])
		    	flag = 2;
		    else if(keys[37] && keys[40])
		    	flag = 7;
		    else if(keys[39] && keys[40])
		    	flag = 9;
		   	else if(keys[37])
		    	flag = 4
		    else if(keys[39])
		    	flag = 6
		    else if(keys[40])
		    	flag = 8;
		    else if(keys[80])
		    	flag = 5;
		    else 
		    	flag = 5;

		    console.log(keys);
		    $("#data").html(flags[flag]);


		    $.post( "../post.php" , {flag: flag });
		});

		$(document).keyup(function (e) {
		    delete keys[e.which];
		    $.post( "../post.php" , {flag: 5 });
		    $("#data").html("Tuşa basmaya devam et ahbap");
		});
		
	});