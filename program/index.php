<?php
    $arr = [
            'box'=>[
                'paper',
                'papirus',
                'orange'
            ],
            'box1'=>[
                'paper',
                'papirus',
                'orange'
            ],
            'box2'=>[
                'key',
                'banana',
                'orange'
            ],
    ];
    echo 'Found the '.rek_look_for_key($arr);

    function look_for_key($arr){
        $pile = [];
        array_push($pile, $arr);
        while (!empty($pile)){
            foreach($pile as $key=>$value){
                foreach($value as $ke=>$val){
                  if (item_is_a_box($ke)) array_push($pile, $val);
                  elseif (item_is_a_key($val)) return $val;
                }  
                unset($pile[$key]);
            }                
        }
    }

    function rek_look_for_key($arr){
        foreach($arr as $key=>$value){
            foreach($value as $ke=>$val){
                if (item_is_a_box($ke)) rek_look_for_key($val);
                elseif (item_is_a_key($val)) return $val;
            }
        }
    }

    function item_is_a_box($key){
        if (preg_match('/box/', $key)) return true;    
    }

    function item_is_a_key($value){
            if ($value == 'key') return true;
    }
